基础版本，完成了大部分的基本功能要求（从homework1-3）。
基本完成的功能有：订单生成（包括FIX编码的生成）；
                  客户端和服务器的搭建；
		  客户端请求打印订单列表；
		  订单处理以及返回；
		  订单撤销处理以及返回信息；
		  订单记录，订单文件读取等。
		  （等待被购买的订单在buy.txt中，等待被卖出的订单在sell.txt中，所有订单被记录在order.txt中，
                    每个文件备份了一份以备测试）
由于个人能力水平有限，部分功能未能很好地实现。
例如，在这个版本中，1.未能做到浮动价位以及中间价位成交。
		    2.未能做到计算平均成交价。
		    3.为简化信息量，只设置了三支股票进行交易。
		    4.未构建monitor客户端，但可以在普通客户端请求打印order列表。
		    等。
异常处理方面，也没有做的很到位。
对未能完成的部分，我深知自己能力的不足，感到深深的歉意。
