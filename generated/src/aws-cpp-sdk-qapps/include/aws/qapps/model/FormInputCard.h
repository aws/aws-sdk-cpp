/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qapps/model/CardType.h>
#include <aws/qapps/model/FormInputCardMetadata.h>
#include <aws/qapps/model/InputCardComputeMode.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>A card in an Amazon Q App that allows the user to submit a
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/FormInputCard">AWS
   * API Reference</a></p>
   */
  class FormInputCard
  {
  public:
    AWS_QAPPS_API FormInputCard();
    AWS_QAPPS_API FormInputCard(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API FormInputCard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the form input card.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline FormInputCard& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline FormInputCard& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline FormInputCard& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the form input card.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline FormInputCard& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline FormInputCard& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline FormInputCard& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any dependencies or requirements for the form input card.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDependencies() const{ return m_dependencies; }
    inline bool DependenciesHasBeenSet() const { return m_dependenciesHasBeenSet; }
    inline void SetDependencies(const Aws::Vector<Aws::String>& value) { m_dependenciesHasBeenSet = true; m_dependencies = value; }
    inline void SetDependencies(Aws::Vector<Aws::String>&& value) { m_dependenciesHasBeenSet = true; m_dependencies = std::move(value); }
    inline FormInputCard& WithDependencies(const Aws::Vector<Aws::String>& value) { SetDependencies(value); return *this;}
    inline FormInputCard& WithDependencies(Aws::Vector<Aws::String>&& value) { SetDependencies(std::move(value)); return *this;}
    inline FormInputCard& AddDependencies(const Aws::String& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }
    inline FormInputCard& AddDependencies(Aws::String&& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(std::move(value)); return *this; }
    inline FormInputCard& AddDependencies(const char* value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the card.</p>
     */
    inline const CardType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CardType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CardType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FormInputCard& WithType(const CardType& value) { SetType(value); return *this;}
    inline FormInputCard& WithType(CardType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that defines the form input card data.</p>
     */
    inline const FormInputCardMetadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const FormInputCardMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(FormInputCardMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline FormInputCard& WithMetadata(const FormInputCardMetadata& value) { SetMetadata(value); return *this;}
    inline FormInputCard& WithMetadata(FormInputCardMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute mode of the form input card. This property determines whether
     * individual participants of a data collection session can submit multiple
     * response or one response. A compute mode of <code>append</code> shall allow
     * participants to submit the same form multiple times with different values. A
     * compute mode of <code>replace</code>code&gt; shall overwrite the current value
     * for each participant.</p>
     */
    inline const InputCardComputeMode& GetComputeMode() const{ return m_computeMode; }
    inline bool ComputeModeHasBeenSet() const { return m_computeModeHasBeenSet; }
    inline void SetComputeMode(const InputCardComputeMode& value) { m_computeModeHasBeenSet = true; m_computeMode = value; }
    inline void SetComputeMode(InputCardComputeMode&& value) { m_computeModeHasBeenSet = true; m_computeMode = std::move(value); }
    inline FormInputCard& WithComputeMode(const InputCardComputeMode& value) { SetComputeMode(value); return *this;}
    inline FormInputCard& WithComputeMode(InputCardComputeMode&& value) { SetComputeMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Vector<Aws::String> m_dependencies;
    bool m_dependenciesHasBeenSet = false;

    CardType m_type;
    bool m_typeHasBeenSet = false;

    FormInputCardMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    InputCardComputeMode m_computeMode;
    bool m_computeModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
