/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>The tax documents required in Amazon Web Services Region in
   * India.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/INDTaxDocuments">AWS
   * API Reference</a></p>
   */
  class INDTaxDocuments
  {
  public:
    AWS_SNOWBALL_API INDTaxDocuments();
    AWS_SNOWBALL_API INDTaxDocuments(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API INDTaxDocuments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Goods and Services Tax (GST) documents required in Amazon Web Services
     * Region in India.</p>
     */
    inline const Aws::String& GetGSTIN() const{ return m_gSTIN; }

    /**
     * <p>The Goods and Services Tax (GST) documents required in Amazon Web Services
     * Region in India.</p>
     */
    inline bool GSTINHasBeenSet() const { return m_gSTINHasBeenSet; }

    /**
     * <p>The Goods and Services Tax (GST) documents required in Amazon Web Services
     * Region in India.</p>
     */
    inline void SetGSTIN(const Aws::String& value) { m_gSTINHasBeenSet = true; m_gSTIN = value; }

    /**
     * <p>The Goods and Services Tax (GST) documents required in Amazon Web Services
     * Region in India.</p>
     */
    inline void SetGSTIN(Aws::String&& value) { m_gSTINHasBeenSet = true; m_gSTIN = std::move(value); }

    /**
     * <p>The Goods and Services Tax (GST) documents required in Amazon Web Services
     * Region in India.</p>
     */
    inline void SetGSTIN(const char* value) { m_gSTINHasBeenSet = true; m_gSTIN.assign(value); }

    /**
     * <p>The Goods and Services Tax (GST) documents required in Amazon Web Services
     * Region in India.</p>
     */
    inline INDTaxDocuments& WithGSTIN(const Aws::String& value) { SetGSTIN(value); return *this;}

    /**
     * <p>The Goods and Services Tax (GST) documents required in Amazon Web Services
     * Region in India.</p>
     */
    inline INDTaxDocuments& WithGSTIN(Aws::String&& value) { SetGSTIN(std::move(value)); return *this;}

    /**
     * <p>The Goods and Services Tax (GST) documents required in Amazon Web Services
     * Region in India.</p>
     */
    inline INDTaxDocuments& WithGSTIN(const char* value) { SetGSTIN(value); return *this;}

  private:

    Aws::String m_gSTIN;
    bool m_gSTINHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
