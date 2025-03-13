/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/model/TemporaryCredential.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>GrantAccess</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/GrantAccessResult">AWS
   * API Reference</a></p>
   */
  class GrantAccessResult
  {
  public:
    AWS_OPSWORKS_API GrantAccessResult() = default;
    AWS_OPSWORKS_API GrantAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API GrantAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>TemporaryCredential</code> object that contains the data needed to
     * log in to the instance by RDP clients, such as the Microsoft Remote Desktop
     * Connection.</p>
     */
    inline const TemporaryCredential& GetTemporaryCredential() const { return m_temporaryCredential; }
    template<typename TemporaryCredentialT = TemporaryCredential>
    void SetTemporaryCredential(TemporaryCredentialT&& value) { m_temporaryCredentialHasBeenSet = true; m_temporaryCredential = std::forward<TemporaryCredentialT>(value); }
    template<typename TemporaryCredentialT = TemporaryCredential>
    GrantAccessResult& WithTemporaryCredential(TemporaryCredentialT&& value) { SetTemporaryCredential(std::forward<TemporaryCredentialT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GrantAccessResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TemporaryCredential m_temporaryCredential;
    bool m_temporaryCredentialHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
