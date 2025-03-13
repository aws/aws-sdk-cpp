/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53profiles/model/ProfileAssociation.h>
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
namespace Route53Profiles
{
namespace Model
{
  class ListProfileAssociationsResult
  {
  public:
    AWS_ROUTE53PROFILES_API ListProfileAssociationsResult() = default;
    AWS_ROUTE53PROFILES_API ListProfileAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53PROFILES_API ListProfileAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> If more than <code>MaxResults</code> profile associations match the
     * specified criteria, you can submit another <code>ListProfileAssociations</code>
     * request to get the next group of results. In the next request, specify the value
     * of <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProfileAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A complex type that containts settings information about the profile's VPC
     * associations. </p>
     */
    inline const Aws::Vector<ProfileAssociation>& GetProfileAssociations() const { return m_profileAssociations; }
    template<typename ProfileAssociationsT = Aws::Vector<ProfileAssociation>>
    void SetProfileAssociations(ProfileAssociationsT&& value) { m_profileAssociationsHasBeenSet = true; m_profileAssociations = std::forward<ProfileAssociationsT>(value); }
    template<typename ProfileAssociationsT = Aws::Vector<ProfileAssociation>>
    ListProfileAssociationsResult& WithProfileAssociations(ProfileAssociationsT&& value) { SetProfileAssociations(std::forward<ProfileAssociationsT>(value)); return *this;}
    template<typename ProfileAssociationsT = ProfileAssociation>
    ListProfileAssociationsResult& AddProfileAssociations(ProfileAssociationsT&& value) { m_profileAssociationsHasBeenSet = true; m_profileAssociations.emplace_back(std::forward<ProfileAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProfileAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ProfileAssociation> m_profileAssociations;
    bool m_profileAssociationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
