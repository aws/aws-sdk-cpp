/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Information about an enabled security standard in which a security control
   * is enabled. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AssociatedStandard">AWS
   * API Reference</a></p>
   */
  class AssociatedStandard
  {
  public:
    AWS_SECURITYHUB_API AssociatedStandard();
    AWS_SECURITYHUB_API AssociatedStandard(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AssociatedStandard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response. </p>
     */
    inline const Aws::String& GetStandardsId() const{ return m_standardsId; }

    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response. </p>
     */
    inline bool StandardsIdHasBeenSet() const { return m_standardsIdHasBeenSet; }

    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response. </p>
     */
    inline void SetStandardsId(const Aws::String& value) { m_standardsIdHasBeenSet = true; m_standardsId = value; }

    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response. </p>
     */
    inline void SetStandardsId(Aws::String&& value) { m_standardsIdHasBeenSet = true; m_standardsId = std::move(value); }

    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response. </p>
     */
    inline void SetStandardsId(const char* value) { m_standardsIdHasBeenSet = true; m_standardsId.assign(value); }

    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response. </p>
     */
    inline AssociatedStandard& WithStandardsId(const Aws::String& value) { SetStandardsId(value); return *this;}

    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response. </p>
     */
    inline AssociatedStandard& WithStandardsId(Aws::String&& value) { SetStandardsId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response. </p>
     */
    inline AssociatedStandard& WithStandardsId(const char* value) { SetStandardsId(value); return *this;}

  private:

    Aws::String m_standardsId;
    bool m_standardsIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
