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
    AWS_SSM_API S3OutputUrl() = default;
    AWS_SSM_API S3OutputUrl(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API S3OutputUrl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A URL for an S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline const Aws::String& GetOutputUrl() const { return m_outputUrl; }
    inline bool OutputUrlHasBeenSet() const { return m_outputUrlHasBeenSet; }
    template<typename OutputUrlT = Aws::String>
    void SetOutputUrl(OutputUrlT&& value) { m_outputUrlHasBeenSet = true; m_outputUrl = std::forward<OutputUrlT>(value); }
    template<typename OutputUrlT = Aws::String>
    S3OutputUrl& WithOutputUrl(OutputUrlT&& value) { SetOutputUrl(std::forward<OutputUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputUrl;
    bool m_outputUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
