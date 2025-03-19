/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/ActivityTypeInfo.h>
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
namespace SWF
{
namespace Model
{
  /**
   * <p>Contains a paginated list of activity type information
   * structures.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTypeInfos">AWS
   * API Reference</a></p>
   */
  class ListActivityTypesResult
  {
  public:
    AWS_SWF_API ListActivityTypesResult() = default;
    AWS_SWF_API ListActivityTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API ListActivityTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of activity type information.</p>
     */
    inline const Aws::Vector<ActivityTypeInfo>& GetTypeInfos() const { return m_typeInfos; }
    template<typename TypeInfosT = Aws::Vector<ActivityTypeInfo>>
    void SetTypeInfos(TypeInfosT&& value) { m_typeInfosHasBeenSet = true; m_typeInfos = std::forward<TypeInfosT>(value); }
    template<typename TypeInfosT = Aws::Vector<ActivityTypeInfo>>
    ListActivityTypesResult& WithTypeInfos(TypeInfosT&& value) { SetTypeInfos(std::forward<TypeInfosT>(value)); return *this;}
    template<typename TypeInfosT = ActivityTypeInfo>
    ListActivityTypesResult& AddTypeInfos(TypeInfosT&& value) { m_typeInfosHasBeenSet = true; m_typeInfos.emplace_back(std::forward<TypeInfosT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListActivityTypesResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListActivityTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ActivityTypeInfo> m_typeInfos;
    bool m_typeInfosHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
