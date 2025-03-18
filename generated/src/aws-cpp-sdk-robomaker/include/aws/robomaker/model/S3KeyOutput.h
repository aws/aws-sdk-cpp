/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about S3 keys.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/S3KeyOutput">AWS
   * API Reference</a></p>
   */
  class S3KeyOutput
  {
  public:
    AWS_ROBOMAKER_API S3KeyOutput() = default;
    AWS_ROBOMAKER_API S3KeyOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API S3KeyOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 key.</p>
     */
    inline const Aws::String& GetS3Key() const { return m_s3Key; }
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
    template<typename S3KeyT = Aws::String>
    void SetS3Key(S3KeyT&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::forward<S3KeyT>(value); }
    template<typename S3KeyT = Aws::String>
    S3KeyOutput& WithS3Key(S3KeyT&& value) { SetS3Key(std::forward<S3KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The etag for the object.</p>
     */
    inline const Aws::String& GetEtag() const { return m_etag; }
    inline bool EtagHasBeenSet() const { return m_etagHasBeenSet; }
    template<typename EtagT = Aws::String>
    void SetEtag(EtagT&& value) { m_etagHasBeenSet = true; m_etag = std::forward<EtagT>(value); }
    template<typename EtagT = Aws::String>
    S3KeyOutput& WithEtag(EtagT&& value) { SetEtag(std::forward<EtagT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    Aws::String m_etag;
    bool m_etagHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
