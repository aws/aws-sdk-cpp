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
    AWS_SMS_API UserDataValidationParameters();
    AWS_SMS_API UserDataValidationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API UserDataValidationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location of the validation script.</p>
     */
    inline const Source& GetSource() const{ return m_source; }

    /**
     * <p>The location of the validation script.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The location of the validation script.</p>
     */
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The location of the validation script.</p>
     */
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The location of the validation script.</p>
     */
    inline UserDataValidationParameters& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * <p>The location of the validation script.</p>
     */
    inline UserDataValidationParameters& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The type of validation script.</p>
     */
    inline const ScriptType& GetScriptType() const{ return m_scriptType; }

    /**
     * <p>The type of validation script.</p>
     */
    inline bool ScriptTypeHasBeenSet() const { return m_scriptTypeHasBeenSet; }

    /**
     * <p>The type of validation script.</p>
     */
    inline void SetScriptType(const ScriptType& value) { m_scriptTypeHasBeenSet = true; m_scriptType = value; }

    /**
     * <p>The type of validation script.</p>
     */
    inline void SetScriptType(ScriptType&& value) { m_scriptTypeHasBeenSet = true; m_scriptType = std::move(value); }

    /**
     * <p>The type of validation script.</p>
     */
    inline UserDataValidationParameters& WithScriptType(const ScriptType& value) { SetScriptType(value); return *this;}

    /**
     * <p>The type of validation script.</p>
     */
    inline UserDataValidationParameters& WithScriptType(ScriptType&& value) { SetScriptType(std::move(value)); return *this;}

  private:

    Source m_source;
    bool m_sourceHasBeenSet = false;

    ScriptType m_scriptType;
    bool m_scriptTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
