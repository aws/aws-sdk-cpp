/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The definition for the <code>ContributionAnalysisFactor</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ContributionAnalysisFactor">AWS
   * API Reference</a></p>
   */
  class ContributionAnalysisFactor
  {
  public:
    AWS_QUICKSIGHT_API ContributionAnalysisFactor();
    AWS_QUICKSIGHT_API ContributionAnalysisFactor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ContributionAnalysisFactor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field name of the <code>ContributionAnalysisFactor</code>.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }
    inline ContributionAnalysisFactor& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}
    inline ContributionAnalysisFactor& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}
    inline ContributionAnalysisFactor& WithFieldName(const char* value) { SetFieldName(value); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
