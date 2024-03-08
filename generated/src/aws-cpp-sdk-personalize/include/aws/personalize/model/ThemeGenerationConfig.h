/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/FieldsForThemeGeneration.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The configuration details for generating themes with a batch inference
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ThemeGenerationConfig">AWS
   * API Reference</a></p>
   */
  class ThemeGenerationConfig
  {
  public:
    AWS_PERSONALIZE_API ThemeGenerationConfig();
    AWS_PERSONALIZE_API ThemeGenerationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API ThemeGenerationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Fields used to generate descriptive themes for a batch inference job.</p>
     */
    inline const FieldsForThemeGeneration& GetFieldsForThemeGeneration() const{ return m_fieldsForThemeGeneration; }

    /**
     * <p>Fields used to generate descriptive themes for a batch inference job.</p>
     */
    inline bool FieldsForThemeGenerationHasBeenSet() const { return m_fieldsForThemeGenerationHasBeenSet; }

    /**
     * <p>Fields used to generate descriptive themes for a batch inference job.</p>
     */
    inline void SetFieldsForThemeGeneration(const FieldsForThemeGeneration& value) { m_fieldsForThemeGenerationHasBeenSet = true; m_fieldsForThemeGeneration = value; }

    /**
     * <p>Fields used to generate descriptive themes for a batch inference job.</p>
     */
    inline void SetFieldsForThemeGeneration(FieldsForThemeGeneration&& value) { m_fieldsForThemeGenerationHasBeenSet = true; m_fieldsForThemeGeneration = std::move(value); }

    /**
     * <p>Fields used to generate descriptive themes for a batch inference job.</p>
     */
    inline ThemeGenerationConfig& WithFieldsForThemeGeneration(const FieldsForThemeGeneration& value) { SetFieldsForThemeGeneration(value); return *this;}

    /**
     * <p>Fields used to generate descriptive themes for a batch inference job.</p>
     */
    inline ThemeGenerationConfig& WithFieldsForThemeGeneration(FieldsForThemeGeneration&& value) { SetFieldsForThemeGeneration(std::move(value)); return *this;}

  private:

    FieldsForThemeGeneration m_fieldsForThemeGeneration;
    bool m_fieldsForThemeGenerationHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
