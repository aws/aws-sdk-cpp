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
   * <p>The capability configuration for an Amazon Q assistant. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AssistantCapabilityConfiguration">AWS
   * API Reference</a></p>
   */
  class AssistantCapabilityConfiguration
  {
  public:
    AWS_QCONNECT_API AssistantCapabilityConfiguration();
    AWS_QCONNECT_API AssistantCapabilityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AssistantCapabilityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of Amazon Q assistant capability. </p>
     */
    inline const AssistantCapabilityType& GetType() const{ return m_type; }

    /**
     * <p>The type of Amazon Q assistant capability. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of Amazon Q assistant capability. </p>
     */
    inline void SetType(const AssistantCapabilityType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of Amazon Q assistant capability. </p>
     */
    inline void SetType(AssistantCapabilityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of Amazon Q assistant capability. </p>
     */
    inline AssistantCapabilityConfiguration& WithType(const AssistantCapabilityType& value) { SetType(value); return *this;}

    /**
     * <p>The type of Amazon Q assistant capability. </p>
     */
    inline AssistantCapabilityConfiguration& WithType(AssistantCapabilityType&& value) { SetType(std::move(value)); return *this;}

  private:

    AssistantCapabilityType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
