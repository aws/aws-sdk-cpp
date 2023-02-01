/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/CustomDataIdentifiersDetections.h>
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
   * <p>Contains an instance of sensitive data that was detected by a
   * customer-defined identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CustomDataIdentifiersResult">AWS
   * API Reference</a></p>
   */
  class CustomDataIdentifiersResult
  {
  public:
    AWS_SECURITYHUB_API CustomDataIdentifiersResult();
    AWS_SECURITYHUB_API CustomDataIdentifiersResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API CustomDataIdentifiersResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline const Aws::Vector<CustomDataIdentifiersDetections>& GetDetections() const{ return m_detections; }

    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline bool DetectionsHasBeenSet() const { return m_detectionsHasBeenSet; }

    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline void SetDetections(const Aws::Vector<CustomDataIdentifiersDetections>& value) { m_detectionsHasBeenSet = true; m_detections = value; }

    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline void SetDetections(Aws::Vector<CustomDataIdentifiersDetections>&& value) { m_detectionsHasBeenSet = true; m_detections = std::move(value); }

    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline CustomDataIdentifiersResult& WithDetections(const Aws::Vector<CustomDataIdentifiersDetections>& value) { SetDetections(value); return *this;}

    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline CustomDataIdentifiersResult& WithDetections(Aws::Vector<CustomDataIdentifiersDetections>&& value) { SetDetections(std::move(value)); return *this;}

    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline CustomDataIdentifiersResult& AddDetections(const CustomDataIdentifiersDetections& value) { m_detectionsHasBeenSet = true; m_detections.push_back(value); return *this; }

    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline CustomDataIdentifiersResult& AddDetections(CustomDataIdentifiersDetections&& value) { m_detectionsHasBeenSet = true; m_detections.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of occurrences of sensitive data.</p>
     */
    inline long long GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of occurrences of sensitive data.</p>
     */
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }

    /**
     * <p>The total number of occurrences of sensitive data.</p>
     */
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }

    /**
     * <p>The total number of occurrences of sensitive data.</p>
     */
    inline CustomDataIdentifiersResult& WithTotalCount(long long value) { SetTotalCount(value); return *this;}

  private:

    Aws::Vector<CustomDataIdentifiersDetections> m_detections;
    bool m_detectionsHasBeenSet = false;

    long long m_totalCount;
    bool m_totalCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
