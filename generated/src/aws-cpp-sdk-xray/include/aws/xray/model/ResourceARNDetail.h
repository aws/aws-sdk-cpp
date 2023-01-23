/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>A list of resources ARNs corresponding to the segments in a
   * trace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ResourceARNDetail">AWS
   * API Reference</a></p>
   */
  class ResourceARNDetail
  {
  public:
    AWS_XRAY_API ResourceARNDetail();
    AWS_XRAY_API ResourceARNDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API ResourceARNDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a corresponding resource.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN of a corresponding resource.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The ARN of a corresponding resource.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The ARN of a corresponding resource.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The ARN of a corresponding resource.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The ARN of a corresponding resource.</p>
     */
    inline ResourceARNDetail& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN of a corresponding resource.</p>
     */
    inline ResourceARNDetail& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of a corresponding resource.</p>
     */
    inline ResourceARNDetail& WithARN(const char* value) { SetARN(value); return *this;}

  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
