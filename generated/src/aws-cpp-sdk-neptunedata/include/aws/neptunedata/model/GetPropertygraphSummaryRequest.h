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
    AWS_NEPTUNEDATA_API GetPropertygraphSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPropertygraphSummary"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Mode can take one of two values: <code>BASIC</code> (the default), and
     * <code>DETAILED</code>.</p>
     */
    inline const GraphSummaryType& GetMode() const{ return m_mode; }

    /**
     * <p>Mode can take one of two values: <code>BASIC</code> (the default), and
     * <code>DETAILED</code>.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Mode can take one of two values: <code>BASIC</code> (the default), and
     * <code>DETAILED</code>.</p>
     */
    inline void SetMode(const GraphSummaryType& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Mode can take one of two values: <code>BASIC</code> (the default), and
     * <code>DETAILED</code>.</p>
     */
    inline void SetMode(GraphSummaryType&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Mode can take one of two values: <code>BASIC</code> (the default), and
     * <code>DETAILED</code>.</p>
     */
    inline GetPropertygraphSummaryRequest& WithMode(const GraphSummaryType& value) { SetMode(value); return *this;}

    /**
     * <p>Mode can take one of two values: <code>BASIC</code> (the default), and
     * <code>DETAILED</code>.</p>
     */
    inline GetPropertygraphSummaryRequest& WithMode(GraphSummaryType&& value) { SetMode(std::move(value)); return *this;}

  private:

    GraphSummaryType m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
