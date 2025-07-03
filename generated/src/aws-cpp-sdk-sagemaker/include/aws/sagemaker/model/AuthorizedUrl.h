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
   * <p>Contains a presigned URL and its associated local file path for downloading
   * hub content artifacts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AuthorizedUrl">AWS
   * API Reference</a></p>
   */
  class AuthorizedUrl
  {
  public:
    AWS_SAGEMAKER_API AuthorizedUrl() = default;
    AWS_SAGEMAKER_API AuthorizedUrl(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AuthorizedUrl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The presigned S3 URL that provides temporary, secure access to download the
     * file. URLs expire within 15 minutes for security purposes.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    AuthorizedUrl& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended local file path where the downloaded file should be stored to
     * maintain proper directory structure and file organization.</p>
     */
    inline const Aws::String& GetLocalPath() const { return m_localPath; }
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }
    template<typename LocalPathT = Aws::String>
    void SetLocalPath(LocalPathT&& value) { m_localPathHasBeenSet = true; m_localPath = std::forward<LocalPathT>(value); }
    template<typename LocalPathT = Aws::String>
    AuthorizedUrl& WithLocalPath(LocalPathT&& value) { SetLocalPath(std::forward<LocalPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_localPath;
    bool m_localPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
