/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/INDTaxDocuments.h>
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
   * <p>The tax documents required in your Amazon Web Services Region.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/TaxDocuments">AWS
   * API Reference</a></p>
   */
  class TaxDocuments
  {
  public:
    AWS_SNOWBALL_API TaxDocuments() = default;
    AWS_SNOWBALL_API TaxDocuments(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API TaxDocuments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const INDTaxDocuments& GetIND() const { return m_iND; }
    inline bool INDHasBeenSet() const { return m_iNDHasBeenSet; }
    template<typename INDT = INDTaxDocuments>
    void SetIND(INDT&& value) { m_iNDHasBeenSet = true; m_iND = std::forward<INDT>(value); }
    template<typename INDT = INDTaxDocuments>
    TaxDocuments& WithIND(INDT&& value) { SetIND(std::forward<INDT>(value)); return *this;}
    ///@}
  private:

    INDTaxDocuments m_iND;
    bool m_iNDHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
