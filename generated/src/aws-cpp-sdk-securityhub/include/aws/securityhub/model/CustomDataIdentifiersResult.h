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
    AWS_SECURITYHUB_API CustomDataIdentifiersResult() = default;
    AWS_SECURITYHUB_API CustomDataIdentifiersResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API CustomDataIdentifiersResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline const Aws::Vector<CustomDataIdentifiersDetections>& GetDetections() const { return m_detections; }
    inline bool DetectionsHasBeenSet() const { return m_detectionsHasBeenSet; }
    template<typename DetectionsT = Aws::Vector<CustomDataIdentifiersDetections>>
    void SetDetections(DetectionsT&& value) { m_detectionsHasBeenSet = true; m_detections = std::forward<DetectionsT>(value); }
    template<typename DetectionsT = Aws::Vector<CustomDataIdentifiersDetections>>
    CustomDataIdentifiersResult& WithDetections(DetectionsT&& value) { SetDetections(std::forward<DetectionsT>(value)); return *this;}
    template<typename DetectionsT = CustomDataIdentifiersDetections>
    CustomDataIdentifiersResult& AddDetections(DetectionsT&& value) { m_detectionsHasBeenSet = true; m_detections.emplace_back(std::forward<DetectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of occurrences of sensitive data.</p>
     */
    inline long long GetTotalCount() const { return m_totalCount; }
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }
    inline CustomDataIdentifiersResult& WithTotalCount(long long value) { SetTotalCount(value); return *this;}
    ///@}
  private:

    Aws::Vector<CustomDataIdentifiersDetections> m_detections;
    bool m_detectionsHasBeenSet = false;

    long long m_totalCount{0};
    bool m_totalCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
