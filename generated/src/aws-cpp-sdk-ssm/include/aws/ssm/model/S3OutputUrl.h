/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A URL for the Amazon Web Services Systems Manager (Systems Manager) bucket
   * where you want to store the results of this request.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/S3OutputUrl">AWS
   * API Reference</a></p>
   */
  class S3OutputUrl
  {
  public:
    AWS_SSM_API S3OutputUrl();
    AWS_SSM_API S3OutputUrl(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API S3OutputUrl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A URL for an S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline const Aws::String& GetOutputUrl() const{ return m_outputUrl; }
    inline bool OutputUrlHasBeenSet() const { return m_outputUrlHasBeenSet; }
    inline void SetOutputUrl(const Aws::String& value) { m_outputUrlHasBeenSet = true; m_outputUrl = value; }
    inline void SetOutputUrl(Aws::String&& value) { m_outputUrlHasBeenSet = true; m_outputUrl = std::move(value); }
    inline void SetOutputUrl(const char* value) { m_outputUrlHasBeenSet = true; m_outputUrl.assign(value); }
    inline S3OutputUrl& WithOutputUrl(const Aws::String& value) { SetOutputUrl(value); return *this;}
    inline S3OutputUrl& WithOutputUrl(Aws::String&& value) { SetOutputUrl(std::move(value)); return *this;}
    inline S3OutputUrl& WithOutputUrl(const char* value) { SetOutputUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_outputUrl;
    bool m_outputUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
