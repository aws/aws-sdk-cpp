/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/Adapter.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Contains information about adapters used when analyzing a document, with each
   * adapter specified using an AdapterId and version</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/AdaptersConfig">AWS
   * API Reference</a></p>
   */
  class AdaptersConfig
  {
  public:
    AWS_TEXTRACT_API AdaptersConfig() = default;
    AWS_TEXTRACT_API AdaptersConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API AdaptersConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of adapters to be used when analyzing the specified document.</p>
     */
    inline const Aws::Vector<Adapter>& GetAdapters() const { return m_adapters; }
    inline bool AdaptersHasBeenSet() const { return m_adaptersHasBeenSet; }
    template<typename AdaptersT = Aws::Vector<Adapter>>
    void SetAdapters(AdaptersT&& value) { m_adaptersHasBeenSet = true; m_adapters = std::forward<AdaptersT>(value); }
    template<typename AdaptersT = Aws::Vector<Adapter>>
    AdaptersConfig& WithAdapters(AdaptersT&& value) { SetAdapters(std::forward<AdaptersT>(value)); return *this;}
    template<typename AdaptersT = Adapter>
    AdaptersConfig& AddAdapters(AdaptersT&& value) { m_adaptersHasBeenSet = true; m_adapters.emplace_back(std::forward<AdaptersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Adapter> m_adapters;
    bool m_adaptersHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
