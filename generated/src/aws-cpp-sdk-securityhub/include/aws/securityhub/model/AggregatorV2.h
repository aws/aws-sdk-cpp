/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Specifies a cross-Region data aggregation configuration, including the
   * aggregation Region and any linked Regions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AggregatorV2">AWS
   * API Reference</a></p>
   */
  class AggregatorV2
  {
  public:
    AWS_SECURITYHUB_API AggregatorV2() = default;
    AWS_SECURITYHUB_API AggregatorV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AggregatorV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the aggregatorV2.</p>
     */
    inline const Aws::String& GetAggregatorV2Arn() const { return m_aggregatorV2Arn; }
    inline bool AggregatorV2ArnHasBeenSet() const { return m_aggregatorV2ArnHasBeenSet; }
    template<typename AggregatorV2ArnT = Aws::String>
    void SetAggregatorV2Arn(AggregatorV2ArnT&& value) { m_aggregatorV2ArnHasBeenSet = true; m_aggregatorV2Arn = std::forward<AggregatorV2ArnT>(value); }
    template<typename AggregatorV2ArnT = Aws::String>
    AggregatorV2& WithAggregatorV2Arn(AggregatorV2ArnT&& value) { SetAggregatorV2Arn(std::forward<AggregatorV2ArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aggregatorV2Arn;
    bool m_aggregatorV2ArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
