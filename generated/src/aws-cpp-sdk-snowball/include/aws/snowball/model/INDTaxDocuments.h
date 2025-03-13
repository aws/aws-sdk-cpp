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
    AWS_SNOWBALL_API INDTaxDocuments() = default;
    AWS_SNOWBALL_API INDTaxDocuments(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API INDTaxDocuments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Goods and Services Tax (GST) documents required in Amazon Web Services
     * Region in India.</p>
     */
    inline const Aws::String& GetGSTIN() const { return m_gSTIN; }
    inline bool GSTINHasBeenSet() const { return m_gSTINHasBeenSet; }
    template<typename GSTINT = Aws::String>
    void SetGSTIN(GSTINT&& value) { m_gSTINHasBeenSet = true; m_gSTIN = std::forward<GSTINT>(value); }
    template<typename GSTINT = Aws::String>
    INDTaxDocuments& WithGSTIN(GSTINT&& value) { SetGSTIN(std::forward<GSTINT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gSTIN;
    bool m_gSTINHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
