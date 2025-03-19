/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/Source.h>
#include <aws/sms/model/ScriptType.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Contains validation parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UserDataValidationParameters">AWS
   * API Reference</a></p>
   */
  class UserDataValidationParameters
  {
  public:
    AWS_SMS_API UserDataValidationParameters() = default;
    AWS_SMS_API UserDataValidationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API UserDataValidationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location of the validation script.</p>
     */
    inline const Source& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Source>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Source>
    UserDataValidationParameters& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of validation script.</p>
     */
    inline ScriptType GetScriptType() const { return m_scriptType; }
    inline bool ScriptTypeHasBeenSet() const { return m_scriptTypeHasBeenSet; }
    inline void SetScriptType(ScriptType value) { m_scriptTypeHasBeenSet = true; m_scriptType = value; }
    inline UserDataValidationParameters& WithScriptType(ScriptType value) { SetScriptType(value); return *this;}
    ///@}
  private:

    Source m_source;
    bool m_sourceHasBeenSet = false;

    ScriptType m_scriptType{ScriptType::NOT_SET};
    bool m_scriptTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
