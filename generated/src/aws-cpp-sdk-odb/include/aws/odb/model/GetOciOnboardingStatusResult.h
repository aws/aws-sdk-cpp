/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/OciOnboardingStatus.h>
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
namespace odb
{
namespace Model
{
  class GetOciOnboardingStatusResult
  {
  public:
    AWS_ODB_API GetOciOnboardingStatusResult() = default;
    AWS_ODB_API GetOciOnboardingStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API GetOciOnboardingStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline OciOnboardingStatus GetStatus() const { return m_status; }
    inline void SetStatus(OciOnboardingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetOciOnboardingStatusResult& WithStatus(OciOnboardingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The existing OCI tenancy activation link for your Amazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetExistingTenancyActivationLink() const { return m_existingTenancyActivationLink; }
    template<typename ExistingTenancyActivationLinkT = Aws::String>
    void SetExistingTenancyActivationLink(ExistingTenancyActivationLinkT&& value) { m_existingTenancyActivationLinkHasBeenSet = true; m_existingTenancyActivationLink = std::forward<ExistingTenancyActivationLinkT>(value); }
    template<typename ExistingTenancyActivationLinkT = Aws::String>
    GetOciOnboardingStatusResult& WithExistingTenancyActivationLink(ExistingTenancyActivationLinkT&& value) { SetExistingTenancyActivationLink(std::forward<ExistingTenancyActivationLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new OCI tenancy activation link for your Amazon Web Services account.</p>
     */
    inline const Aws::String& GetNewTenancyActivationLink() const { return m_newTenancyActivationLink; }
    template<typename NewTenancyActivationLinkT = Aws::String>
    void SetNewTenancyActivationLink(NewTenancyActivationLinkT&& value) { m_newTenancyActivationLinkHasBeenSet = true; m_newTenancyActivationLink = std::forward<NewTenancyActivationLinkT>(value); }
    template<typename NewTenancyActivationLinkT = Aws::String>
    GetOciOnboardingStatusResult& WithNewTenancyActivationLink(NewTenancyActivationLinkT&& value) { SetNewTenancyActivationLink(std::forward<NewTenancyActivationLinkT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOciOnboardingStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OciOnboardingStatus m_status{OciOnboardingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_existingTenancyActivationLink;
    bool m_existingTenancyActivationLinkHasBeenSet = false;

    Aws::String m_newTenancyActivationLink;
    bool m_newTenancyActivationLinkHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
