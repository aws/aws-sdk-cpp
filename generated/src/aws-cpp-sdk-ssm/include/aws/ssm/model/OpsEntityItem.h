/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The OpsData summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsEntityItem">AWS
   * API Reference</a></p>
   */
  class OpsEntityItem
  {
  public:
    AWS_SSM_API OpsEntityItem() = default;
    AWS_SSM_API OpsEntityItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsEntityItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time the OpsData was captured.</p>
     */
    inline const Aws::String& GetCaptureTime() const { return m_captureTime; }
    inline bool CaptureTimeHasBeenSet() const { return m_captureTimeHasBeenSet; }
    template<typename CaptureTimeT = Aws::String>
    void SetCaptureTime(CaptureTimeT&& value) { m_captureTimeHasBeenSet = true; m_captureTime = std::forward<CaptureTimeT>(value); }
    template<typename CaptureTimeT = Aws::String>
    OpsEntityItem& WithCaptureTime(CaptureTimeT&& value) { SetCaptureTime(std::forward<CaptureTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of an OpsData summary.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    OpsEntityItem& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    template<typename ContentT = Aws::Map<Aws::String, Aws::String>>
    OpsEntityItem& AddContent(ContentT&& value) { m_contentHasBeenSet = true; m_content.emplace_back(std::forward<ContentT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_captureTime;
    bool m_captureTimeHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
