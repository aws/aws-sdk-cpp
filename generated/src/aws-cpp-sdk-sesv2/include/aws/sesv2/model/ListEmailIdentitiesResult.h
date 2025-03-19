/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/IdentityInfo.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>A list of all of the identities that you've attempted to verify, regardless
   * of whether or not those identities were successfully verified.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailIdentitiesResponse">AWS
   * API Reference</a></p>
   */
  class ListEmailIdentitiesResult
  {
  public:
    AWS_SESV2_API ListEmailIdentitiesResult() = default;
    AWS_SESV2_API ListEmailIdentitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListEmailIdentitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that includes all of the email identities associated with your
     * Amazon Web Services account.</p>
     */
    inline const Aws::Vector<IdentityInfo>& GetEmailIdentities() const { return m_emailIdentities; }
    template<typename EmailIdentitiesT = Aws::Vector<IdentityInfo>>
    void SetEmailIdentities(EmailIdentitiesT&& value) { m_emailIdentitiesHasBeenSet = true; m_emailIdentities = std::forward<EmailIdentitiesT>(value); }
    template<typename EmailIdentitiesT = Aws::Vector<IdentityInfo>>
    ListEmailIdentitiesResult& WithEmailIdentities(EmailIdentitiesT&& value) { SetEmailIdentities(std::forward<EmailIdentitiesT>(value)); return *this;}
    template<typename EmailIdentitiesT = IdentityInfo>
    ListEmailIdentitiesResult& AddEmailIdentities(EmailIdentitiesT&& value) { m_emailIdentitiesHasBeenSet = true; m_emailIdentities.emplace_back(std::forward<EmailIdentitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListEmailIdentities</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEmailIdentitiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEmailIdentitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IdentityInfo> m_emailIdentities;
    bool m_emailIdentitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
