/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MQ
{
namespace Model
{
  class CreateBrokerResult
  {
  public:
    AWS_MQ_API CreateBrokerResult();
    AWS_MQ_API CreateBrokerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API CreateBrokerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetBrokerArn() const{ return m_brokerArn; }

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline void SetBrokerArn(const Aws::String& value) { m_brokerArn = value; }

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline void SetBrokerArn(Aws::String&& value) { m_brokerArn = std::move(value); }

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline void SetBrokerArn(const char* value) { m_brokerArn.assign(value); }

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline CreateBrokerResult& WithBrokerArn(const Aws::String& value) { SetBrokerArn(value); return *this;}

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline CreateBrokerResult& WithBrokerArn(Aws::String&& value) { SetBrokerArn(std::move(value)); return *this;}

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline CreateBrokerResult& WithBrokerArn(const char* value) { SetBrokerArn(value); return *this;}


    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerId = value; }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerId = std::move(value); }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const char* value) { m_brokerId.assign(value); }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline CreateBrokerResult& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline CreateBrokerResult& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline CreateBrokerResult& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}

  private:

    Aws::String m_brokerArn;

    Aws::String m_brokerId;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
