/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataQnAConfigurations.h>
#include <aws/quicksight/model/GenerativeAuthoringConfigurations.h>
#include <aws/quicksight/model/ExecutiveSummaryConfigurations.h>
#include <aws/quicksight/model/DataStoriesConfigurations.h>
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
   * <p>A collection of Amazon Q feature configurations in an embedded QuickSight
   * console.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AmazonQInQuickSightConsoleConfigurations">AWS
   * API Reference</a></p>
   */
  class AmazonQInQuickSightConsoleConfigurations
  {
  public:
    AWS_QUICKSIGHT_API AmazonQInQuickSightConsoleConfigurations() = default;
    AWS_QUICKSIGHT_API AmazonQInQuickSightConsoleConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AmazonQInQuickSightConsoleConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Adds generative Q&amp;A capabilitiees to an embedded QuickSight console.</p>
     */
    inline const DataQnAConfigurations& GetDataQnA() const { return m_dataQnA; }
    inline bool DataQnAHasBeenSet() const { return m_dataQnAHasBeenSet; }
    template<typename DataQnAT = DataQnAConfigurations>
    void SetDataQnA(DataQnAT&& value) { m_dataQnAHasBeenSet = true; m_dataQnA = std::forward<DataQnAT>(value); }
    template<typename DataQnAT = DataQnAConfigurations>
    AmazonQInQuickSightConsoleConfigurations& WithDataQnA(DataQnAT&& value) { SetDataQnA(std::forward<DataQnAT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds the generative BI authoring experience to an embedded QuickSight
     * console.</p>
     */
    inline const GenerativeAuthoringConfigurations& GetGenerativeAuthoring() const { return m_generativeAuthoring; }
    inline bool GenerativeAuthoringHasBeenSet() const { return m_generativeAuthoringHasBeenSet; }
    template<typename GenerativeAuthoringT = GenerativeAuthoringConfigurations>
    void SetGenerativeAuthoring(GenerativeAuthoringT&& value) { m_generativeAuthoringHasBeenSet = true; m_generativeAuthoring = std::forward<GenerativeAuthoringT>(value); }
    template<typename GenerativeAuthoringT = GenerativeAuthoringConfigurations>
    AmazonQInQuickSightConsoleConfigurations& WithGenerativeAuthoring(GenerativeAuthoringT&& value) { SetGenerativeAuthoring(std::forward<GenerativeAuthoringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds the executive summaries feature to an embedded QuickSight console.</p>
     */
    inline const ExecutiveSummaryConfigurations& GetExecutiveSummary() const { return m_executiveSummary; }
    inline bool ExecutiveSummaryHasBeenSet() const { return m_executiveSummaryHasBeenSet; }
    template<typename ExecutiveSummaryT = ExecutiveSummaryConfigurations>
    void SetExecutiveSummary(ExecutiveSummaryT&& value) { m_executiveSummaryHasBeenSet = true; m_executiveSummary = std::forward<ExecutiveSummaryT>(value); }
    template<typename ExecutiveSummaryT = ExecutiveSummaryConfigurations>
    AmazonQInQuickSightConsoleConfigurations& WithExecutiveSummary(ExecutiveSummaryT&& value) { SetExecutiveSummary(std::forward<ExecutiveSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds the data stories feature to an embedded QuickSight console.</p>
     */
    inline const DataStoriesConfigurations& GetDataStories() const { return m_dataStories; }
    inline bool DataStoriesHasBeenSet() const { return m_dataStoriesHasBeenSet; }
    template<typename DataStoriesT = DataStoriesConfigurations>
    void SetDataStories(DataStoriesT&& value) { m_dataStoriesHasBeenSet = true; m_dataStories = std::forward<DataStoriesT>(value); }
    template<typename DataStoriesT = DataStoriesConfigurations>
    AmazonQInQuickSightConsoleConfigurations& WithDataStories(DataStoriesT&& value) { SetDataStories(std::forward<DataStoriesT>(value)); return *this;}
    ///@}
  private:

    DataQnAConfigurations m_dataQnA;
    bool m_dataQnAHasBeenSet = false;

    GenerativeAuthoringConfigurations m_generativeAuthoring;
    bool m_generativeAuthoringHasBeenSet = false;

    ExecutiveSummaryConfigurations m_executiveSummary;
    bool m_executiveSummaryHasBeenSet = false;

    DataStoriesConfigurations m_dataStories;
    bool m_dataStoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
