/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AccountConfiguration.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeAccountConfigurationResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeAccountConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class DescribeAccountConfigurationResult
  {
  public:
    AWS_MEDIALIVE_API DescribeAccountConfigurationResult();
    AWS_MEDIALIVE_API DescribeAccountConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeAccountConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const AccountConfiguration& GetAccountConfiguration() const{ return m_accountConfiguration; }

    
    inline void SetAccountConfiguration(const AccountConfiguration& value) { m_accountConfiguration = value; }

    
    inline void SetAccountConfiguration(AccountConfiguration&& value) { m_accountConfiguration = std::move(value); }

    
    inline DescribeAccountConfigurationResult& WithAccountConfiguration(const AccountConfiguration& value) { SetAccountConfiguration(value); return *this;}

    
    inline DescribeAccountConfigurationResult& WithAccountConfiguration(AccountConfiguration&& value) { SetAccountConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAccountConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAccountConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAccountConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccountConfiguration m_accountConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
