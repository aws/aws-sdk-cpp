/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ClassificationResult.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about sensitive data that was detected on a
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DataClassificationDetails">AWS
   * API Reference</a></p>
   */
  class DataClassificationDetails
  {
  public:
    AWS_SECURITYHUB_API DataClassificationDetails() = default;
    AWS_SECURITYHUB_API DataClassificationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API DataClassificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the folder or file that contains the sensitive data.</p>
     */
    inline const Aws::String& GetDetailedResultsLocation() const { return m_detailedResultsLocation; }
    inline bool DetailedResultsLocationHasBeenSet() const { return m_detailedResultsLocationHasBeenSet; }
    template<typename DetailedResultsLocationT = Aws::String>
    void SetDetailedResultsLocation(DetailedResultsLocationT&& value) { m_detailedResultsLocationHasBeenSet = true; m_detailedResultsLocation = std::forward<DetailedResultsLocationT>(value); }
    template<typename DetailedResultsLocationT = Aws::String>
    DataClassificationDetails& WithDetailedResultsLocation(DetailedResultsLocationT&& value) { SetDetailedResultsLocation(std::forward<DetailedResultsLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the sensitive data that was detected on the resource.</p>
     */
    inline const ClassificationResult& GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    template<typename ResultT = ClassificationResult>
    void SetResult(ResultT&& value) { m_resultHasBeenSet = true; m_result = std::forward<ResultT>(value); }
    template<typename ResultT = ClassificationResult>
    DataClassificationDetails& WithResult(ResultT&& value) { SetResult(std::forward<ResultT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detailedResultsLocation;
    bool m_detailedResultsLocationHasBeenSet = false;

    ClassificationResult m_result;
    bool m_resultHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
