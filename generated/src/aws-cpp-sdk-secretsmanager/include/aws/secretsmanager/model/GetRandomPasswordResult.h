/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
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
namespace SecretsManager
{
namespace Model
{
  class GetRandomPasswordResult
  {
  public:
    AWS_SECRETSMANAGER_API GetRandomPasswordResult() = default;
    AWS_SECRETSMANAGER_API GetRandomPasswordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API GetRandomPasswordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A string with the password.</p>
     */
    inline const Aws::String& GetRandomPassword() const { return m_randomPassword; }
    template<typename RandomPasswordT = Aws::String>
    void SetRandomPassword(RandomPasswordT&& value) { m_randomPasswordHasBeenSet = true; m_randomPassword = std::forward<RandomPasswordT>(value); }
    template<typename RandomPasswordT = Aws::String>
    GetRandomPasswordResult& WithRandomPassword(RandomPasswordT&& value) { SetRandomPassword(std::forward<RandomPasswordT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRandomPasswordResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_randomPassword;
    bool m_randomPasswordHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
