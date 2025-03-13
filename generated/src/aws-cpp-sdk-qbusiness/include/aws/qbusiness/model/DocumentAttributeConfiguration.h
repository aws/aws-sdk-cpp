/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/AttributeType.h>
#include <aws/qbusiness/model/Status.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Configuration information for document attributes. Document attributes are
   * metadata or fields associated with your documents. For example, the company
   * department name associated with each document.</p> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/doc-attributes.html">Understanding
   * document attributes</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DocumentAttributeConfiguration">AWS
   * API Reference</a></p>
   */
  class DocumentAttributeConfiguration
  {
  public:
    AWS_QBUSINESS_API DocumentAttributeConfiguration() = default;
    AWS_QBUSINESS_API DocumentAttributeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentAttributeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the document attribute.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DocumentAttributeConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of document attribute.</p>
     */
    inline AttributeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AttributeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DocumentAttributeConfiguration& WithType(AttributeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about whether the document attribute can be used by an end user
     * to search for information on their web experience.</p>
     */
    inline Status GetSearch() const { return m_search; }
    inline bool SearchHasBeenSet() const { return m_searchHasBeenSet; }
    inline void SetSearch(Status value) { m_searchHasBeenSet = true; m_search = value; }
    inline DocumentAttributeConfiguration& WithSearch(Status value) { SetSearch(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AttributeType m_type{AttributeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Status m_search{Status::NOT_SET};
    bool m_searchHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
