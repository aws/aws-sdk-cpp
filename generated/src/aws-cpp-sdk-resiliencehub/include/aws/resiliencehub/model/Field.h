/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/FieldAggregationType.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Indicates the field or attribute of a resource or data structure on which a
   * condition is being applied or evaluated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/Field">AWS
   * API Reference</a></p>
   */
  class Field
  {
  public:
    AWS_RESILIENCEHUB_API Field() = default;
    AWS_RESILIENCEHUB_API Field(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Field& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>(Optional) Indicates the type of aggregation or summary operation (such as
     * Sum, Average, and so on) to be performed on a particular field or set of
     * data.</p>
     */
    inline FieldAggregationType GetAggregation() const { return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    inline void SetAggregation(FieldAggregationType value) { m_aggregationHasBeenSet = true; m_aggregation = value; }
    inline Field& WithAggregation(FieldAggregationType value) { SetAggregation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the field.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Field& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    FieldAggregationType m_aggregation{FieldAggregationType::NOT_SET};
    bool m_aggregationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
