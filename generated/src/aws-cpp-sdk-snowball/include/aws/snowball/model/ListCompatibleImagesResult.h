/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/CompatibleImage.h>
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
namespace Snowball
{
namespace Model
{
  class ListCompatibleImagesResult
  {
  public:
    AWS_SNOWBALL_API ListCompatibleImagesResult() = default;
    AWS_SNOWBALL_API ListCompatibleImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API ListCompatibleImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A JSON-formatted object that describes a compatible AMI, including the ID and
     * name for a Snow device AMI.</p>
     */
    inline const Aws::Vector<CompatibleImage>& GetCompatibleImages() const { return m_compatibleImages; }
    template<typename CompatibleImagesT = Aws::Vector<CompatibleImage>>
    void SetCompatibleImages(CompatibleImagesT&& value) { m_compatibleImagesHasBeenSet = true; m_compatibleImages = std::forward<CompatibleImagesT>(value); }
    template<typename CompatibleImagesT = Aws::Vector<CompatibleImage>>
    ListCompatibleImagesResult& WithCompatibleImages(CompatibleImagesT&& value) { SetCompatibleImages(std::forward<CompatibleImagesT>(value)); return *this;}
    template<typename CompatibleImagesT = CompatibleImage>
    ListCompatibleImagesResult& AddCompatibleImages(CompatibleImagesT&& value) { m_compatibleImagesHasBeenSet = true; m_compatibleImages.emplace_back(std::forward<CompatibleImagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Because HTTP requests are stateless, this is the starting point for your next
     * list of returned images.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCompatibleImagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCompatibleImagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CompatibleImage> m_compatibleImages;
    bool m_compatibleImagesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
