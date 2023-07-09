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
   * Placeholder documentation for UpdateAccountConfigurationResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateAccountConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class UpdateAccountConfigurationResult
  {
  public:
    AWS_MEDIALIVE_API UpdateAccountConfigurationResult();
    AWS_MEDIALIVE_API UpdateAccountConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API UpdateAccountConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const AccountConfiguration& GetAccountConfiguration() const{ return m_accountConfiguration; }

    
    inline void SetAccountConfiguration(const AccountConfiguration& value) { m_accountConfiguration = value; }

    
    inline void SetAccountConfiguration(AccountConfiguration&& value) { m_accountConfiguration = std::move(value); }

    
    inline UpdateAccountConfigurationResult& WithAccountConfiguration(const AccountConfiguration& value) { SetAccountConfiguration(value); return *this;}

    
    inline UpdateAccountConfigurationResult& WithAccountConfiguration(AccountConfiguration&& value) { SetAccountConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAccountConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAccountConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAccountConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccountConfiguration m_accountConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
