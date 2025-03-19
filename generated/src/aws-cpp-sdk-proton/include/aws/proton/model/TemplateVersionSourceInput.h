/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/S3ObjectSource.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>Template version source data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/TemplateVersionSourceInput">AWS
   * API Reference</a></p>
   */
  class TemplateVersionSourceInput
  {
  public:
    AWS_PROTON_API TemplateVersionSourceInput() = default;
    AWS_PROTON_API TemplateVersionSourceInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API TemplateVersionSourceInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An S3 source object that includes the template bundle S3 path and name for a
     * template minor version.</p>
     */
    inline const S3ObjectSource& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3ObjectSource>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3ObjectSource>
    TemplateVersionSourceInput& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}
  private:

    S3ObjectSource m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
