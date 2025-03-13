/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ContentReference.h>
#include <aws/qconnect/model/GenerativeReference.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>Reference data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DataReference">AWS
   * API Reference</a></p>
   */
  class DataReference
  {
  public:
    AWS_QCONNECT_API DataReference() = default;
    AWS_QCONNECT_API DataReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API DataReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ContentReference& GetContentReference() const { return m_contentReference; }
    inline bool ContentReferenceHasBeenSet() const { return m_contentReferenceHasBeenSet; }
    template<typename ContentReferenceT = ContentReference>
    void SetContentReference(ContentReferenceT&& value) { m_contentReferenceHasBeenSet = true; m_contentReference = std::forward<ContentReferenceT>(value); }
    template<typename ContentReferenceT = ContentReference>
    DataReference& WithContentReference(ContentReferenceT&& value) { SetContentReference(std::forward<ContentReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference information about the generative content.</p>
     */
    inline const GenerativeReference& GetGenerativeReference() const { return m_generativeReference; }
    inline bool GenerativeReferenceHasBeenSet() const { return m_generativeReferenceHasBeenSet; }
    template<typename GenerativeReferenceT = GenerativeReference>
    void SetGenerativeReference(GenerativeReferenceT&& value) { m_generativeReferenceHasBeenSet = true; m_generativeReference = std::forward<GenerativeReferenceT>(value); }
    template<typename GenerativeReferenceT = GenerativeReference>
    DataReference& WithGenerativeReference(GenerativeReferenceT&& value) { SetGenerativeReference(std::forward<GenerativeReferenceT>(value)); return *this;}
    ///@}
  private:

    ContentReference m_contentReference;
    bool m_contentReferenceHasBeenSet = false;

    GenerativeReference m_generativeReference;
    bool m_generativeReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
