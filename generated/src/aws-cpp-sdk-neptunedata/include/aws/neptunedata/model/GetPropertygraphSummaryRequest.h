/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/neptunedata/model/GraphSummaryType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace neptunedata
{
namespace Model
{

  /**
   */
  class GetPropertygraphSummaryRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API GetPropertygraphSummaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPropertygraphSummary"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Mode can take one of two values: <code>BASIC</code> (the default), and
     * <code>DETAILED</code>.</p>
     */
    inline GraphSummaryType GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(GraphSummaryType value) { m_modeHasBeenSet = true; m_mode = value; }
    inline GetPropertygraphSummaryRequest& WithMode(GraphSummaryType value) { SetMode(value); return *this;}
    ///@}
  private:

    GraphSummaryType m_mode{GraphSummaryType::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
