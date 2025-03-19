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
   * <p>A placement strategy that determines how to place the tasks for the
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsServicePlacementStrategiesDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsServicePlacementStrategiesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsServicePlacementStrategiesDetails() = default;
    AWS_SECURITYHUB_API AwsEcsServicePlacementStrategiesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServicePlacementStrategiesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field to apply the placement strategy against.</p> <p>For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>.</p> <p>For the
     * <code>binpack</code> placement strategy, valid values are <code>cpu</code> and
     * <code>memory</code>.</p> <p>For the <code>random</code> placement strategy, this
     * attribute is not used.</p>
     */
    inline const Aws::String& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = Aws::String>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = Aws::String>
    AwsEcsServicePlacementStrategiesDetails& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of placement strategy.</p> <p>The <code>random</code> placement
     * strategy randomly places tasks on available candidates.</p> <p>The
     * <code>spread</code> placement strategy spreads placement across available
     * candidates evenly based on the value of <code>Field</code>.</p> <p>The
     * <code>binpack</code> strategy places tasks on available candidates that have the
     * least available amount of the resource that is specified in
     * <code>Field</code>.</p> <p>Valid values: <code>random</code> |
     * <code>spread</code> | <code>binpack</code> </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsEcsServicePlacementStrategiesDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
