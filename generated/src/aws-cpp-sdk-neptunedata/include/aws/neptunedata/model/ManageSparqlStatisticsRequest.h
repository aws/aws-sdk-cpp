﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/neptunedata/model/StatisticsAutoGenerationMode.h>
#include <utility>

namespace Aws
{
namespace neptunedata
{
namespace Model
{

  /**
   */
  class ManageSparqlStatisticsRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API ManageSparqlStatisticsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ManageSparqlStatistics"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The statistics generation mode. One of: <code>DISABLE_AUTOCOMPUTE</code>,
     * <code>ENABLE_AUTOCOMPUTE</code>, or <code>REFRESH</code>, the last of which
     * manually triggers DFE statistics generation.</p>
     */
    inline StatisticsAutoGenerationMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(StatisticsAutoGenerationMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline ManageSparqlStatisticsRequest& WithMode(StatisticsAutoGenerationMode value) { SetMode(value); return *this;}
    ///@}
  private:

    StatisticsAutoGenerationMode m_mode{StatisticsAutoGenerationMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
