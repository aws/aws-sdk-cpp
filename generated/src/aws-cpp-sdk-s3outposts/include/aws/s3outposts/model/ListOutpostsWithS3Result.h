/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3outposts/model/Outpost.h>
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
namespace S3Outposts
{
namespace Model
{
  class ListOutpostsWithS3Result
  {
  public:
    AWS_S3OUTPOSTS_API ListOutpostsWithS3Result() = default;
    AWS_S3OUTPOSTS_API ListOutpostsWithS3Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3OUTPOSTS_API ListOutpostsWithS3Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the list of Outposts that have the following characteristics:</p>
     * <ul> <li> <p>outposts that have S3 provisioned</p> </li> <li> <p>outposts that
     * are <code>Active</code> (not pending any provisioning nor decommissioned)</p>
     * </li> <li> <p>outposts to which the the calling Amazon Web Services account has
     * access</p> </li> </ul>
     */
    inline const Aws::Vector<Outpost>& GetOutposts() const { return m_outposts; }
    template<typename OutpostsT = Aws::Vector<Outpost>>
    void SetOutposts(OutpostsT&& value) { m_outpostsHasBeenSet = true; m_outposts = std::forward<OutpostsT>(value); }
    template<typename OutpostsT = Aws::Vector<Outpost>>
    ListOutpostsWithS3Result& WithOutposts(OutpostsT&& value) { SetOutposts(std::forward<OutpostsT>(value)); return *this;}
    template<typename OutpostsT = Outpost>
    ListOutpostsWithS3Result& AddOutposts(OutpostsT&& value) { m_outpostsHasBeenSet = true; m_outposts.emplace_back(std::forward<OutpostsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns a token that you can use to call <code>ListOutpostsWithS3</code>
     * again and receive additional results, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOutpostsWithS3Result& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOutpostsWithS3Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Outpost> m_outposts;
    bool m_outpostsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Outposts
} // namespace Aws
