/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AssistantCapabilityType.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The capability configuration for an Amazon Q in Connect assistant.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AssistantCapabilityConfiguration">AWS
   * API Reference</a></p>
   */
  class AssistantCapabilityConfiguration
  {
  public:
    AWS_QCONNECT_API AssistantCapabilityConfiguration() = default;
    AWS_QCONNECT_API AssistantCapabilityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AssistantCapabilityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of Amazon Q in Connect assistant capability. </p>
     */
    inline AssistantCapabilityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AssistantCapabilityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AssistantCapabilityConfiguration& WithType(AssistantCapabilityType value) { SetType(value); return *this;}
    ///@}
  private:

    AssistantCapabilityType m_type{AssistantCapabilityType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
