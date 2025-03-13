/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Container for user interface template information.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UiTemplateInfo">AWS
   * API Reference</a></p>
   */
  class UiTemplateInfo
  {
  public:
    AWS_SAGEMAKER_API UiTemplateInfo() = default;
    AWS_SAGEMAKER_API UiTemplateInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UiTemplateInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL for the user interface template.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    UiTemplateInfo& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA-256 digest of the contents of the template.</p>
     */
    inline const Aws::String& GetContentSha256() const { return m_contentSha256; }
    inline bool ContentSha256HasBeenSet() const { return m_contentSha256HasBeenSet; }
    template<typename ContentSha256T = Aws::String>
    void SetContentSha256(ContentSha256T&& value) { m_contentSha256HasBeenSet = true; m_contentSha256 = std::forward<ContentSha256T>(value); }
    template<typename ContentSha256T = Aws::String>
    UiTemplateInfo& WithContentSha256(ContentSha256T&& value) { SetContentSha256(std::forward<ContentSha256T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_contentSha256;
    bool m_contentSha256HasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
