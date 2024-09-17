/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/RecommendedActionType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>The recommended action from the Amazon Redshift Advisor
   * recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RecommendedAction">AWS
   * API Reference</a></p>
   */
  class RecommendedAction
  {
  public:
    AWS_REDSHIFT_API RecommendedAction();
    AWS_REDSHIFT_API RecommendedAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API RecommendedAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The specific instruction about the command.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline RecommendedAction& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline RecommendedAction& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline RecommendedAction& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database name to perform the action on. Only applicable if the type of
     * command is SQL.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline RecommendedAction& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline RecommendedAction& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline RecommendedAction& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command to run.</p>
     */
    inline const Aws::String& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline void SetCommand(const char* value) { m_commandHasBeenSet = true; m_command.assign(value); }
    inline RecommendedAction& WithCommand(const Aws::String& value) { SetCommand(value); return *this;}
    inline RecommendedAction& WithCommand(Aws::String&& value) { SetCommand(std::move(value)); return *this;}
    inline RecommendedAction& WithCommand(const char* value) { SetCommand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of command.</p>
     */
    inline const RecommendedActionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RecommendedActionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RecommendedActionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RecommendedAction& WithType(const RecommendedActionType& value) { SetType(value); return *this;}
    inline RecommendedAction& WithType(RecommendedActionType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_command;
    bool m_commandHasBeenSet = false;

    RecommendedActionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
