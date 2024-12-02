/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/GuardrailManagedWordsType.h>
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
   * <p>The managed word list to configure for the AI Guardrail.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GuardrailManagedWordsConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailManagedWordsConfig
  {
  public:
    AWS_QCONNECT_API GuardrailManagedWordsConfig();
    AWS_QCONNECT_API GuardrailManagedWordsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API GuardrailManagedWordsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The managed word type to configure for the AI Guardrail.</p>
     */
    inline const GuardrailManagedWordsType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GuardrailManagedWordsType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GuardrailManagedWordsType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline GuardrailManagedWordsConfig& WithType(const GuardrailManagedWordsType& value) { SetType(value); return *this;}
    inline GuardrailManagedWordsConfig& WithType(GuardrailManagedWordsType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    GuardrailManagedWordsType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
