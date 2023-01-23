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
    AWS_SECURITYHUB_API DataClassificationDetails();
    AWS_SECURITYHUB_API DataClassificationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API DataClassificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to the folder or file that contains the sensitive data.</p>
     */
    inline const Aws::String& GetDetailedResultsLocation() const{ return m_detailedResultsLocation; }

    /**
     * <p>The path to the folder or file that contains the sensitive data.</p>
     */
    inline bool DetailedResultsLocationHasBeenSet() const { return m_detailedResultsLocationHasBeenSet; }

    /**
     * <p>The path to the folder or file that contains the sensitive data.</p>
     */
    inline void SetDetailedResultsLocation(const Aws::String& value) { m_detailedResultsLocationHasBeenSet = true; m_detailedResultsLocation = value; }

    /**
     * <p>The path to the folder or file that contains the sensitive data.</p>
     */
    inline void SetDetailedResultsLocation(Aws::String&& value) { m_detailedResultsLocationHasBeenSet = true; m_detailedResultsLocation = std::move(value); }

    /**
     * <p>The path to the folder or file that contains the sensitive data.</p>
     */
    inline void SetDetailedResultsLocation(const char* value) { m_detailedResultsLocationHasBeenSet = true; m_detailedResultsLocation.assign(value); }

    /**
     * <p>The path to the folder or file that contains the sensitive data.</p>
     */
    inline DataClassificationDetails& WithDetailedResultsLocation(const Aws::String& value) { SetDetailedResultsLocation(value); return *this;}

    /**
     * <p>The path to the folder or file that contains the sensitive data.</p>
     */
    inline DataClassificationDetails& WithDetailedResultsLocation(Aws::String&& value) { SetDetailedResultsLocation(std::move(value)); return *this;}

    /**
     * <p>The path to the folder or file that contains the sensitive data.</p>
     */
    inline DataClassificationDetails& WithDetailedResultsLocation(const char* value) { SetDetailedResultsLocation(value); return *this;}


    /**
     * <p>The details about the sensitive data that was detected on the resource.</p>
     */
    inline const ClassificationResult& GetResult() const{ return m_result; }

    /**
     * <p>The details about the sensitive data that was detected on the resource.</p>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>The details about the sensitive data that was detected on the resource.</p>
     */
    inline void SetResult(const ClassificationResult& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The details about the sensitive data that was detected on the resource.</p>
     */
    inline void SetResult(ClassificationResult&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>The details about the sensitive data that was detected on the resource.</p>
     */
    inline DataClassificationDetails& WithResult(const ClassificationResult& value) { SetResult(value); return *this;}

    /**
     * <p>The details about the sensitive data that was detected on the resource.</p>
     */
    inline DataClassificationDetails& WithResult(ClassificationResult&& value) { SetResult(std::move(value)); return *this;}

  private:

    Aws::String m_detailedResultsLocation;
    bool m_detailedResultsLocationHasBeenSet = false;

    ClassificationResult m_result;
    bool m_resultHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
