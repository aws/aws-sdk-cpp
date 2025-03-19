/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/Owner.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/Grant.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class GetBucketAclResult
  {
  public:
    AWS_S3_API GetBucketAclResult() = default;
    AWS_S3_API GetBucketAclResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketAclResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Container for the bucket owner's display name and ID.</p>
     */
    inline const Owner& GetOwner() const { return m_owner; }
    template<typename OwnerT = Owner>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Owner>
    GetBucketAclResult& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of grants.</p>
     */
    inline const Aws::Vector<Grant>& GetGrants() const { return m_grants; }
    template<typename GrantsT = Aws::Vector<Grant>>
    void SetGrants(GrantsT&& value) { m_grantsHasBeenSet = true; m_grants = std::forward<GrantsT>(value); }
    template<typename GrantsT = Aws::Vector<Grant>>
    GetBucketAclResult& WithGrants(GrantsT&& value) { SetGrants(std::forward<GrantsT>(value)); return *this;}
    template<typename GrantsT = Grant>
    GetBucketAclResult& AddGrants(GrantsT&& value) { m_grantsHasBeenSet = true; m_grants.emplace_back(std::forward<GrantsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketAclResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Owner m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Vector<Grant> m_grants;
    bool m_grantsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
