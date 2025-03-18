/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/SensitiveDataDetections.h>
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
   * <p>Contains a detected instance of sensitive data that are based on built-in
   * identifiers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SensitiveDataResult">AWS
   * API Reference</a></p>
   */
  class SensitiveDataResult
  {
  public:
    AWS_SECURITYHUB_API SensitiveDataResult() = default;
    AWS_SECURITYHUB_API SensitiveDataResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SensitiveDataResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category of sensitive data that was detected. For example, the category
     * can indicate that the sensitive data involved credentials, financial
     * information, or personal information.</p>
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    SensitiveDataResult& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of detected instances of sensitive data.</p>
     */
    inline const Aws::Vector<SensitiveDataDetections>& GetDetections() const { return m_detections; }
    inline bool DetectionsHasBeenSet() const { return m_detectionsHasBeenSet; }
    template<typename DetectionsT = Aws::Vector<SensitiveDataDetections>>
    void SetDetections(DetectionsT&& value) { m_detectionsHasBeenSet = true; m_detections = std::forward<DetectionsT>(value); }
    template<typename DetectionsT = Aws::Vector<SensitiveDataDetections>>
    SensitiveDataResult& WithDetections(DetectionsT&& value) { SetDetections(std::forward<DetectionsT>(value)); return *this;}
    template<typename DetectionsT = SensitiveDataDetections>
    SensitiveDataResult& AddDetections(DetectionsT&& value) { m_detectionsHasBeenSet = true; m_detections.emplace_back(std::forward<DetectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of occurrences of sensitive data.</p>
     */
    inline long long GetTotalCount() const { return m_totalCount; }
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }
    inline SensitiveDataResult& WithTotalCount(long long value) { SetTotalCount(value); return *this;}
    ///@}
  private:

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<SensitiveDataDetections> m_detections;
    bool m_detectionsHasBeenSet = false;

    long long m_totalCount{0};
    bool m_totalCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
