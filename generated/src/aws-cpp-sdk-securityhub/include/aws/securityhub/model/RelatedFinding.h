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
   * <p>Details about a related finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RelatedFinding">AWS
   * API Reference</a></p>
   */
  class RelatedFinding
  {
  public:
    AWS_SECURITYHUB_API RelatedFinding();
    AWS_SECURITYHUB_API RelatedFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RelatedFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the product that generated a related finding.</p>
     */
    inline const Aws::String& GetProductArn() const{ return m_productArn; }
    inline bool ProductArnHasBeenSet() const { return m_productArnHasBeenSet; }
    inline void SetProductArn(const Aws::String& value) { m_productArnHasBeenSet = true; m_productArn = value; }
    inline void SetProductArn(Aws::String&& value) { m_productArnHasBeenSet = true; m_productArn = std::move(value); }
    inline void SetProductArn(const char* value) { m_productArnHasBeenSet = true; m_productArn.assign(value); }
    inline RelatedFinding& WithProductArn(const Aws::String& value) { SetProductArn(value); return *this;}
    inline RelatedFinding& WithProductArn(Aws::String&& value) { SetProductArn(std::move(value)); return *this;}
    inline RelatedFinding& WithProductArn(const char* value) { SetProductArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product-generated identifier for a related finding.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RelatedFinding& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RelatedFinding& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RelatedFinding& WithId(const char* value) { SetId(value); return *this;}
    ///@}
  private:

    Aws::String m_productArn;
    bool m_productArnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
