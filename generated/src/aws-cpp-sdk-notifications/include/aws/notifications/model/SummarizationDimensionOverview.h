/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Notifications
{
namespace Model
{

  /**
   * <p>Provides an overview of how data is summarized across different
   * dimensions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/SummarizationDimensionOverview">AWS
   * API Reference</a></p>
   */
  class SummarizationDimensionOverview
  {
  public:
    AWS_NOTIFICATIONS_API SummarizationDimensionOverview();
    AWS_NOTIFICATIONS_API SummarizationDimensionOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API SummarizationDimensionOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the summarization dimension.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SummarizationDimensionOverview& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SummarizationDimensionOverview& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SummarizationDimensionOverview& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of occurrences for this dimension.</p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline SummarizationDimensionOverview& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the sample values found within the dimension.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSampleValues() const{ return m_sampleValues; }
    inline bool SampleValuesHasBeenSet() const { return m_sampleValuesHasBeenSet; }
    inline void SetSampleValues(const Aws::Vector<Aws::String>& value) { m_sampleValuesHasBeenSet = true; m_sampleValues = value; }
    inline void SetSampleValues(Aws::Vector<Aws::String>&& value) { m_sampleValuesHasBeenSet = true; m_sampleValues = std::move(value); }
    inline SummarizationDimensionOverview& WithSampleValues(const Aws::Vector<Aws::String>& value) { SetSampleValues(value); return *this;}
    inline SummarizationDimensionOverview& WithSampleValues(Aws::Vector<Aws::String>&& value) { SetSampleValues(std::move(value)); return *this;}
    inline SummarizationDimensionOverview& AddSampleValues(const Aws::String& value) { m_sampleValuesHasBeenSet = true; m_sampleValues.push_back(value); return *this; }
    inline SummarizationDimensionOverview& AddSampleValues(Aws::String&& value) { m_sampleValuesHasBeenSet = true; m_sampleValues.push_back(std::move(value)); return *this; }
    inline SummarizationDimensionOverview& AddSampleValues(const char* value) { m_sampleValuesHasBeenSet = true; m_sampleValues.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::Vector<Aws::String> m_sampleValues;
    bool m_sampleValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
