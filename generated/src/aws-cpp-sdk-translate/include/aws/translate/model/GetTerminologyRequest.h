/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/TerminologyDataFormat.h>
#include <utility>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class GetTerminologyRequest : public TranslateRequest
  {
  public:
    AWS_TRANSLATE_API GetTerminologyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTerminology"; }

    AWS_TRANSLATE_API Aws::String SerializePayload() const override;

    AWS_TRANSLATE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetTerminologyRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data format of the custom terminology being retrieved.</p> <p>If you
     * don't specify this parameter, Amazon Translate returns a file with the same
     * format as the file that was imported to create the terminology. </p> <p>If you
     * specify this parameter when you retrieve a multi-directional terminology
     * resource, you must specify the same format as the input file that was imported
     * to create it. Otherwise, Amazon Translate throws an error.</p>
     */
    inline TerminologyDataFormat GetTerminologyDataFormat() const { return m_terminologyDataFormat; }
    inline bool TerminologyDataFormatHasBeenSet() const { return m_terminologyDataFormatHasBeenSet; }
    inline void SetTerminologyDataFormat(TerminologyDataFormat value) { m_terminologyDataFormatHasBeenSet = true; m_terminologyDataFormat = value; }
    inline GetTerminologyRequest& WithTerminologyDataFormat(TerminologyDataFormat value) { SetTerminologyDataFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TerminologyDataFormat m_terminologyDataFormat{TerminologyDataFormat::NOT_SET};
    bool m_terminologyDataFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
