/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains information on a recommendation filter, including its ARN, status,
   * and filter expression.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_PERSONALIZE_API Filter() = default;
    AWS_PERSONALIZE_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Filter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the filter.</p>
     */
    inline const Aws::String& GetFilterArn() const { return m_filterArn; }
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }
    template<typename FilterArnT = Aws::String>
    void SetFilterArn(FilterArnT&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::forward<FilterArnT>(value); }
    template<typename FilterArnT = Aws::String>
    Filter& WithFilterArn(FilterArnT&& value) { SetFilterArn(std::forward<FilterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the filter was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    Filter& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the filter was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    Filter& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the dataset group to which the filter belongs.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const { return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    template<typename DatasetGroupArnT = Aws::String>
    void SetDatasetGroupArn(DatasetGroupArnT&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::forward<DatasetGroupArnT>(value); }
    template<typename DatasetGroupArnT = Aws::String>
    Filter& WithDatasetGroupArn(DatasetGroupArnT&& value) { SetDatasetGroupArn(std::forward<DatasetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the filter failed, the reason for its failure.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    Filter& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of item interactions to filter out of recommendation
     * results. The filter expression must follow specific format rules. For
     * information about filter expression structure and syntax, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter-expressions.html">Filter
     * expressions</a>.</p>
     */
    inline const Aws::String& GetFilterExpression() const { return m_filterExpression; }
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
    template<typename FilterExpressionT = Aws::String>
    void SetFilterExpression(FilterExpressionT&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::forward<FilterExpressionT>(value); }
    template<typename FilterExpressionT = Aws::String>
    Filter& WithFilterExpression(FilterExpressionT&& value) { SetFilterExpression(std::forward<FilterExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the filter.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Filter& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_filterArn;
    bool m_filterArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
