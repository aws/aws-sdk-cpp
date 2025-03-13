/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace neptunedata
{
namespace Model
{

  /**
   */
  class GetOpenCypherQueryStatusRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API GetOpenCypherQueryStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOpenCypherQueryStatus"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID of the openCypher query for which to retrieve the query
     * status.</p>
     */
    inline const Aws::String& GetQueryId() const { return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    template<typename QueryIdT = Aws::String>
    void SetQueryId(QueryIdT&& value) { m_queryIdHasBeenSet = true; m_queryId = std::forward<QueryIdT>(value); }
    template<typename QueryIdT = Aws::String>
    GetOpenCypherQueryStatusRequest& WithQueryId(QueryIdT&& value) { SetQueryId(std::forward<QueryIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
