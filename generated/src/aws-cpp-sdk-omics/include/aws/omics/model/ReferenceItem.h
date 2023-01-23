/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A genome reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ReferenceItem">AWS
   * API Reference</a></p>
   */
  class ReferenceItem
  {
  public:
    AWS_OMICS_API ReferenceItem();
    AWS_OMICS_API ReferenceItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReferenceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reference's ARN.</p>
     */
    inline const Aws::String& GetReferenceArn() const{ return m_referenceArn; }

    /**
     * <p>The reference's ARN.</p>
     */
    inline bool ReferenceArnHasBeenSet() const { return m_referenceArnHasBeenSet; }

    /**
     * <p>The reference's ARN.</p>
     */
    inline void SetReferenceArn(const Aws::String& value) { m_referenceArnHasBeenSet = true; m_referenceArn = value; }

    /**
     * <p>The reference's ARN.</p>
     */
    inline void SetReferenceArn(Aws::String&& value) { m_referenceArnHasBeenSet = true; m_referenceArn = std::move(value); }

    /**
     * <p>The reference's ARN.</p>
     */
    inline void SetReferenceArn(const char* value) { m_referenceArnHasBeenSet = true; m_referenceArn.assign(value); }

    /**
     * <p>The reference's ARN.</p>
     */
    inline ReferenceItem& WithReferenceArn(const Aws::String& value) { SetReferenceArn(value); return *this;}

    /**
     * <p>The reference's ARN.</p>
     */
    inline ReferenceItem& WithReferenceArn(Aws::String&& value) { SetReferenceArn(std::move(value)); return *this;}

    /**
     * <p>The reference's ARN.</p>
     */
    inline ReferenceItem& WithReferenceArn(const char* value) { SetReferenceArn(value); return *this;}

  private:

    Aws::String m_referenceArn;
    bool m_referenceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
