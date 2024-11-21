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
    AWS_RESILIENCEHUB_API Field();
    AWS_RESILIENCEHUB_API Field(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Field& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>(Optional) Indicates the type of aggregation or summary operation (such as
     * Sum, Average, and so on) to be performed on a particular field or set of
     * data.</p>
     */
    inline const FieldAggregationType& GetAggregation() const{ return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    inline void SetAggregation(const FieldAggregationType& value) { m_aggregationHasBeenSet = true; m_aggregation = value; }
    inline void SetAggregation(FieldAggregationType&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::move(value); }
    inline Field& WithAggregation(const FieldAggregationType& value) { SetAggregation(value); return *this;}
    inline Field& WithAggregation(FieldAggregationType&& value) { SetAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the field.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Field& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Field& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Field& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    FieldAggregationType m_aggregation;
    bool m_aggregationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
